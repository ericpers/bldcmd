using System.ComponentModel;

namespace binDotnet.ui;

public partial class CgWind
{


    private void CgWind_OnClosed(object? sender, EventArgs e)
    {
        this.cgobs.WindowClosed();
    }
}