# クリップボード履歴の最新項目を削除するツール (DeleteLatestClipboardHistory)

Windows 10 (バージョン 2004以降) および Windows 11 に搭載されているクリップボード履歴機能 (`Win` + `V`) のうち、最新の項目を1つだけ削除するコンソールアプリケーションです。

本リポジトリには、同じ機能を持つ C++ 版と C# 版の2つの実装が含まれています。

## 機能
- 実行すると、UIを表示せずにクリップボード履歴の最新項目を1つ削除します。
- 処理が完了すると、プログラムは自動的に終了します。

---

## 各実装について

### C++ 版

C++/WinRT を利用して実装されています。

#### 必要な環境
- Windows 10 SDK (10.0.17763.0 以降)
- Visual Studio
  - 「C++によるデスクトップ開発」ワークロード
  - C++/WinRT Visual Studio Extension (VSIX) のインストールを推奨します

#### ビルドと実行
1. `cpp/ClipboardHistoryManager.sln` を Visual Studio で開きます。
2. ビルド構成を `Release` に設定します。
3. ソリューションをビルドします。
4. `cpp/x64/Release/` ディレクトリに `ClipboardHistMngr.exe` が生成されます。
5. `ClipboardHistMngr.exe` を実行します。

### C# 版

.NET と WinRT API を利用して実装されています。

#### 必要な環境
- Visual Studio
  - 「.NETデスクトップ開発」ワークロード

#### ビルドと実行
1. `csharp/DeleteClipBardHistory.sln` を Visual Studio で開きます。
2. ビルド構成を `Release` に設定します。
3. ソリューションをビルドします。
4. `csharp/DeleteClipBardHistory/bin/Release/netX.X/` ディレクトリに `DeleteClipBoardHistory.exe` が生成されます。（`netX.X` は.NETのバージョンによって異なります）
5. `DeleteClipBoardHistory.exe` を実行します。

---

## ライセンス

このプロジェクトは [MIT License](LICENSE.txt) の下で公開されています。
