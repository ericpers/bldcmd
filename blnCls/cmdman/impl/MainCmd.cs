using binDotnet.blnCls.blind;

namespace binDotnet.blnCls.cmdman.impl;

public class StartCmd : CmdManage
{
    public StartCmd(GameCore gme)
    {
        this.gme = gme;
        this.Cmd = "start";

    }

    public override bool Exec()
    {
        // 执行命令.
        gme.Start();
        gme.Hint("打开 cg 窗口, 加载关卡, 关闭任何窗口都会退出整个游戏\n");
        return true;

    }
}

public class QuitCmd : CmdManage
{
    public QuitCmd(GameCore gme)
    {
        this.gme = gme;
        this.Cmd = "quit";
    }

    public override bool Exec()
    {
        gme.Quit();
        return true;
    }
}

public class LoadCmd : CmdManage {
    public LoadCmd(GameCore gme)
    {
        this.gme = gme;
        this.Cmd = "load";
    }

    public override bool Exec() {
        this.gme.LevelLoad();
        return true;
    }

}





