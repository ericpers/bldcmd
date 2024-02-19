using binDotnet.blnCls.blind;
using binDotnet.blnCls.blind.charac;
using System.ComponentModel;

namespace binDotnet.blnCls.cmdman.impl;

public class Move:CmdManage
{
    // 前进行为
    public Move(GameCore gme)
    {
        this.gme = gme;
    }

    public override bool Exec()
    {
        var newPos = this.gme.charac.Pos;
        Boolean hiw;
        // 判断 character 是否会撞墙.
        // 让 character 修改 pos 通知 level 事件判断 ( 传入 pos )
        switch (this.gme.charac.CharacDirect)
        {
            case Direct.East:
                {
                    newPos.Second = newPos.Second == this.gme.level.PuzzleSize.Second ? newPos.Second : newPos.Second + 1;
                    hiw = this.gme.level.HitWall(newPos);
                    break;
                }
            case Direct.North:
                {
                    newPos.First = newPos.First == 0 ? newPos.First : newPos.First - 1;
                    hiw = this.gme.level.HitWall(newPos);
                    break;
                }
            case Direct.South:
                {
                    newPos.First = newPos.First == this.gme.level.PuzzleSize.First ? newPos.First : newPos.First + 1;
                    hiw = this.gme.level.HitWall(newPos);
                    break;
                }
            case Direct.West:
                {
                    newPos.First = newPos.First == 0 ? newPos.Second : newPos.Second - 1;
                    hiw = this.gme.level.HitWall(newPos);
                    break;
                }
            default:
                { hiw = true; break; }

        }

        if (hiw)
        {
            // 撞墙给出提示
            this.gme.Hint("你撞墙了");

        }
        else {
            // 没有撞墙, 更新pos
            this.gme.charac.Pos = newPos;
        }
        return true;

    }
}

public class Load : CmdManage
{




    public override bool Exec()
    {
        throw new NotImplementedException();
    }
}





