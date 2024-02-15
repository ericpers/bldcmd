namespace binDotnet.blnCls.constVle.text;

public static class MainText {
    // 在最开始进入游戏时的 cmdHint 内容
    public static string Welcome(string name) {
        var res = $"欢迎, {name}, 输入以下内容以继续\n" +
            $"* 输入 start 开始新游戏.\n " +
            $"* 输入 continue 继续游戏\n" +
            $"* 输入 quit 退出游戏. \n" +
            $"* 输入 name NAME 将名字更改为 NAME\n";
        return res;
    }




}