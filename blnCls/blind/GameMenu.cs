using binDotnet.blnCls.level;

namespace binDotnet.blnCls.blind;

public partial class GameCore
{
    private Level lev;
    public bool Start()
    {

        cgobs.Start();
        // 加载第一关
        
        return true;
    }

    public bool InitGame()
    {
        cmdobs.Start();
        // cgobs.Close();
        return true;
        
    }

    public bool Quit(string target = "all")
    {
        switch (target)
        {
            case "all":
            {
                cgobs.Close();
                cmdobs.Close();
                break;
            }

            case "cg":
            {
                cgobs.Close();
                break;
            }

            case "cmd": {
                cmdobs.Close();
                break;
            }
        }

        return true;
    }
}