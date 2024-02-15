using binDotnet.blnCls.constVle.text;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Shapes;
using binDotnet.blnCls.blind;
using binDotnet.blnCls.blind.observe;

namespace binDotnet.ui
{
    /// <summary>
    /// CmdWind.xaml 的交互逻辑
    /// </summary>
    public partial class CmdWind : Window
    {
        public Dictionary<string, string> keyPair { get; set; }
        public CmdObserver cmdobs;
        
        public CmdWind()
        {
            InitializeComponent();
            // 绑定监视者
            
        }

        private void EnterCmd(object sender, KeyEventArgs e)
        {
            // 获取 text
            if (e.Key == Key.Enter)
            {
                
                var text = CmdInput.Text;
                CmdInput.Text = "";
                cmdobs.ManagCom(text);
                
            }
        }

        public bool Attach(CmdObserver cmdobserv)
        {
            this.cmdobs = cmdobserv;
            
            return true;
        }

        public bool update()
        {
            // 向中介传递
            return true;
        }


    }
}
