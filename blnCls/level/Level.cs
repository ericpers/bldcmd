namespace binDotnet.blnCls.level;

public enum PuzzlePointType
{
    Start = 0,  // 起点
    Pass,       // 终点
    Document,   // 档案读取点(无危险)
    Event,      // 档案读取点(事件)
    Death,      // 死亡陷阱
}

public abstract class Level
{
    protected int [][] puzzleArr; 
    protected docu.BldDocu[] DocuList;

    public bool LoadPuzzle(string filedir)
    {
        return true;
    }
    
    




}