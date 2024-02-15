using binDotnet.blnCls.blind;
using binDotnet.blnCls.blind.observe;
using binDotnet.ui;
using System.Configuration;
using System.Data;
using System.Windows;

namespace binDotnet;

/// <summary>
/// Interaction logic for App.xaml
/// </summary>
public partial class App : Application
{
    public void Application_Startup(object sender, StartupEventArgs e) {

        var cmdWind = new CmdWind();
        var cgWind = new CgWind();
        var gme = new GameCore();
        var cmdobs = new CmdObserver(cmdWind, gme); // 生成并绑定 gamecore 和 wind
        var cgobs = new CgObserver(cgWind, gme); // 生成并绑定到 gamecore 和 wind
        gme.bindObs(cmdobs, cgobs);
        gme.InitGame();
    }
}

