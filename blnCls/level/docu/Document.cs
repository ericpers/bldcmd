using System.Windows.Controls;
using System.Drawing;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using binDotnet.blnCls.constVle.typeSign;


namespace binDotnet.blnCls.level.docu;



/// <summary> 记录关卡的档案信息, 推动剧情发展或者完善剧情发展 </summary>
public abstract class BldDocu

{
    /// <summary>
    /// 档案地址, 后期考虑将这一项改成编号, 由数据库读取.
    /// </summary>
    /// 
    public string DocuPth { get; protected set; }
    /// <summary>
    /// 记录 档案类型 的枚举
    /// </summary>
    public DocumentType DocuType { get; protected set; }

    
    public BldDocu(string docuPth, DocumentType docutype)
    {
        this.DocuPth = docuPth;
        this.DocuType = docutype;
    }
    
    
    
    

}