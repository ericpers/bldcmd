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







