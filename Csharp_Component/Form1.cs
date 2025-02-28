using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Csharp_Component
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            resultListView.View = View.Details;
            resultListView.Columns.Add("기록", 240);
        }

        private void add_Click(object sender, EventArgs e)
        {
            try
            {
                int result = Convert.ToInt32(variable1.Text) + Convert.ToInt32(variable2.Text);
                resultLabel.Text = Convert.ToString(result);
                ListViewItem item = new ListViewItem(variable1.Text + " + " + variable2.Text + " = " + result);
                resultListView.Items.Add(item);
            }
            catch(Exception)
            {
                resultLabel.Text = "입력 값 오류가 발생했습니다.";
            }
        }

        private void subtrack_Click(object sender, EventArgs e)
        {
            try
            {
                int result = Convert.ToInt32(variable1.Text) - Convert.ToInt32(variable2.Text);
                resultLabel.Text = Convert.ToString(result);
                ListViewItem item = new ListViewItem(variable1.Text + " - " + variable2.Text + " = " + result);
                resultListView.Items.Add(item);
            }
            catch (Exception)
            {
                resultLabel.Text = "입력 값 오류가 발생했습니다.";
            }
        }

        private void multiply_Click(object sender, EventArgs e)
        {
            try
            {
                int result = Convert.ToInt32(variable1.Text) * Convert.ToInt32(variable2.Text);
                resultLabel.Text = Convert.ToString(result);
                ListViewItem item = new ListViewItem(variable1.Text + " * " + variable2.Text + " = " + result);
                resultListView.Items.Add(item);
            }
            catch (Exception)
            {
                resultLabel.Text = "입력 값 오류가 발생했습니다.";
            }
        }

        private void divide_Click(object sender, EventArgs e)
        {
            try
            {
                int result = Convert.ToInt32(variable1.Text) / Convert.ToInt32(variable2.Text);
                resultLabel.Text = Convert.ToString(result);
                ListViewItem item = new ListViewItem(variable1.Text + " / " + variable2.Text + " = " + result);
                resultListView.Items.Add(item);
            }
            catch (Exception)
            {
                resultLabel.Text = "입력 값 오류가 발생했습니다.";
            }
        }
    }
}
