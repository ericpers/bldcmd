using System.Collections;
using binDotnet.blnCls.blind;
using gram.grammar;

namespace binDotnet.blnCls.cmdman;

// 抽象cmd, 包含 cmdname 和 arg 两个
// 由 工厂 生产这些并将必要的 arg 传递.



public abstract class CmdManage
{
    // 通知哪个核心执行
    protected GameCore gme;
    public string Cmd { get; protected set; }
    public List<string> Arg { get; protected set; }

    public abstract bool Exec();
    
}