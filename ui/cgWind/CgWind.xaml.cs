using System;
using System.Collections.Generic;
using System.ComponentModel;
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
using System.Windows.Threading;
using binDotnet.blnCls.blind;
using binDotnet.blnCls.blind.observe;

namespace binDotnet.ui;

    /// <summary>
    /// CgWind.xaml 的交互逻辑
    /// </summary>
    ///
    
    
    
public partial class CgWind : Window
{
private CgObserver cgobs;
    public CgWind()
    {
        InitializeComponent();
        DispatcherTimer timer = new DispatcherTimer();
    }

    public bool Attach(CgObserver cgobs)
    {
        this.cgobs = cgobs;
        return true;
        
    }



}
    
    
    

