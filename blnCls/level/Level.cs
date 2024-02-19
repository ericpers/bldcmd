using binDotnet.blnCls.util;

namespace binDotnet.blnCls.level;

public enum PuzzlePointType
{
    Start = 0,  // 起点
    Pass,       // 终点
    Document,   // 档案读取点(无危险)
    Event,      // 档案读取点(事件)
    Death,      // 死亡陷阱
    Wall,       // 墙
}

public abstract class Level
{
    protected int [][] puzzleArr; 
    protected docu.BldDocu[] DocuList;

    public bool LoadPuzzle(string filedir)
    {
        return true;
    }

    public bool HitWall(Pair<Int32, Int32> pos) {
        if (puzzleArr[pos.First][pos.Second] == (int)PuzzlePointType.Wall) {
            return true;
        }
        return false;
    }

    public Pair<Int32, Int32> PuzzleSize {
        get {
            Pair<Int32, Int32> sze = new Pair<int, int>();
            sze.First = puzzleArr.Length;
            sze.Second = puzzleArr[0].Length;
            return sze;
        }
    }


}