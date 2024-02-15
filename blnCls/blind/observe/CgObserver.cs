using binDotnet.ui;
using System.Windows;
using binDotnet.blnCls.cmdman;

namespace binDotnet.blnCls.blind.observe;

public partial class CgObserver
{
    public CgWind Subject { get; private set; }
    public GameCore Game { get; private set; }
    public CgObserver(CgWind cgwind, GameCore game)
    {
        this.Subject = cgwind;
        this.Game = game;
        this.Subject.Attach(this);
    }

    public bool Close() {
        this.Subject.Close();

        return true;
    }

    public bool Start()
    {
        
        this.Subject.Show();
        return true;
    }

    public  bool sendCommand() // 向游戏核心发送相关命令方法
    {
        return true;
    }
}




