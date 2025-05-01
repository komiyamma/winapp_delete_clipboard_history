#include <iostream>
#include <winrt/Windows.ApplicationModel.DataTransfer.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>

using namespace winrt;
using namespace Windows::ApplicationModel::DataTransfer;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;

int main()
{
    try {
        init_apartment(); // WinRT の初期化

        auto historyOperation = Clipboard::GetHistoryItemsAsync();
        auto history = historyOperation.get(); // 非同期呼び出しを同期処理に変換

        if (!history)
        {
            return 0;
        }

        int count = history.Items().Size();

        if (count >= 1)
        {
            auto contentView = history.Items().GetAt(1);
            Clipboard::DeleteItemFromHistory(history.Items().GetAt(0));
        }

        if (count > 64)
        {
            count = 64;
        }

        return count;
    }
    catch (...) {

    }
    return 0;
}