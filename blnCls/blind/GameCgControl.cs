using binDotnet.blnCls.level;

namespace binDotnet.blnCls.blind;

public partial class GameCore
{
    private bool levelStart = false;

    public bool LevelLoad(Level lev)
    {
        this.lev = lev;

        return true;
    }

    public bool LevelStart()
    {
        this.levelStart = true;
        
        // 开始关卡
        return true;
    }
    
    




}






