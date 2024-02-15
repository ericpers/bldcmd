using binDotnet.blnCls.blind;
using binDotnet.blnCls.cmdman.impl;

namespace binDotnet.blnCls.cmdman;

public class CmdManFact
{

    
    public CmdManage Generate(string CmdName, List<string> args, GameCore game)
    {
        switch (CmdName){
            case "start":
            {
                if (args.Count != 0)
                {
                    game.Hint("参数错误: start 不带参数");
                    
                }
                else
                {
                    return new StartCmd(game);
                }

                break;
            }

            case "quit":
            {
                if (args.Count != 0)
                {
                    game.Hint("参数错误: quit 不带参数");
                    
                }
                else
                {
                    return new QuitCmd(game);
                }

                break;
            }

        }

        return null;
    }
}