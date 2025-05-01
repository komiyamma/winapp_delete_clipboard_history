namespace DeleteClipBoardHistory
{
    internal class Program
    {
        static int Main(string[] args)
        {
            var history = Windows.ApplicationModel.DataTransfer.Clipboard.GetHistoryItemsAsync().GetResults();
            if (history == null)
            {
                return 0;
            }
            int count = history.Items.Count;

            if (count >= 1)
            {
                var contentView = history.Items[1];
                Windows.ApplicationModel.DataTransfer.Clipboard.DeleteItemFromHistory(history.Items[0]);
            }

            if (count > 64)
            {
                count = 64;
            }
            return count;
        }
    }
}
