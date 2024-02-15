using System.Security.Cryptography.X509Certificates;
using binDotnet.blnCls.level;
using binDotnet.blnCls.util;

namespace binDotnet.blnCls.blind.charac;

public enum Direct
{
    East = 0,
    South,
    West,
    North,
    
    
}

public class Charac
{
    public string Name { get; set; } = "%#$%";
    public Pair<Int32, Int32> Pos { get;  set; }
    public double HP { get; private set; } = 150;
    public Direct CharacDirect { get; private set; } = Direct.North;
    private level.Level lev;


    /// <summary>
    ///  角色进行移动操作. 判断是否撞墙
    /// </summary>
    /// <returns></returns>
    public bool Turn(string direct)
    {
        string dirLow = direct.ToLower();
        if (dirLow == "left")
        {
            this.CharacDirect = (this.CharacDirect - 1);
            if ((int)this.CharacDirect == -1)
            {
                this.CharacDirect += 4;
            }
        }
        else if (dirLow == "right")
        {
            this.CharacDirect = (this.CharacDirect + 1);
            if ((int)this.CharacDirect == 5)
            {
                this.CharacDirect -= 4;
            }
        }
        else if (dirLow == "around")
        {
            this.CharacDirect += 2;
            if ((int)this.CharacDirect > 4)
            {
                this.CharacDirect -= 4;
            }
            else if((int)this.CharacDirect < 0)
            {
                this.CharacDirect += 4;
            }
        }

        return true;
    }









}









