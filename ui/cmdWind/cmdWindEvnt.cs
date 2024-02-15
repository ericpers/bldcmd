using System.Windows;

namespace binDotnet.ui;

public partial class CmdWind : Window
{
    private void Window_Closed(object sender, EventArgs e)
    {
        cmdobs.WindowClosed();
    }
}