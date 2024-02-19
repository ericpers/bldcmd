using System.Collections;
using System.Windows;
using binDotnet.blnCls.blind.charac;
using binDotnet.blnCls.blind.observe;
using binDotnet.blnCls.constVle.typeSign;
using binDotnet.blnCls.level;
using binDotnet.ui;

namespace binDotnet.blnCls.blind;

public partial class GameCore
{
    private CmdObserver cmdobs;
    private CgObserver cgobs;
    private string name;
    public Charac charac;
    private GameStatus gameStatus;
    public Level level;
    
    public GameCore(string name)
    {
        charac.Name = name;
        


    }

    public GameCore() {
        this.name = "%$#%$#";
        
    }

    

    public bool bindObs(CmdObserver cmdobs, CgObserver cgobs) { 
        this.cgobs = cgobs;
        this.cmdobs = cmdobs;
        return true;
    }
    

    public bool Hint(string hintstr)
    {
        cmdobs.Hint(hintstr);

        return true;
    }
    
    
    
    
}





