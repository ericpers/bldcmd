using binDotnet.ui;

namespace binDotnet.blnCls.blind.observe;

public partial class CmdObserver
{
        public bool WindowClosed()
        {
            
            this.Game.Quit();
            return true;
        }



}

public partial class CgObserver
{
    public bool WindowClosed()
    {
        this.Game.Quit();
        return true;
    }
}