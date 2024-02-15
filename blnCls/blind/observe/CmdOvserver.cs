using binDotnet.ui;
using System.Windows;
using binDotnet.blnCls.cmdman;

namespace binDotnet.blnCls.blind.observe;

public partial class CmdObserver {

    public CmdWind Subject { get; private set; }
    public GameCore Game { get; private set; }

    public bool Start()
    {

        Subject.Show();

        return true;
    }

    public bool Close()
    {
        Subject.Close();
        return true;
    }

    public CmdObserver(CmdWind cmdwind, GameCore game)
    {
        this.Subject = cmdwind;
        this.Subject.Attach(this);
        this.Game = game;
    }
    public bool ManagCom(string text)
    {
        var cmdana = new gram.CmdAna(text);
        cmdana.Analyze();
        var cmdstr = cmdana.Cmd;
        var cmdargs = cmdana.Args;
        
        // 分析命令
        CmdManFact cmdfact = new CmdManFact();
        CmdManage cmd = cmdfact.Generate(cmdstr, cmdargs, this.Game);
        cmd.Exec();
        
        return true;
    }


    public void Hint(string hintstr)
    {
        // cmdHint 提示信息
        Subject.CmdHint.Text = hintstr;
    }


}

