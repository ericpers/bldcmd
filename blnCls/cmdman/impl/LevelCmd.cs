using binDotnet.blnCls.blind;

namespace binDotnet.blnCls.cmdman.impl;

public class Move:CmdManage
{
    // 前进行为
    public Move(GameCore gme)
    {
        this.gme = gme;
    }

    public override bool Exec()
    {
        gme.ChrMove();


        return true;

    }
}







