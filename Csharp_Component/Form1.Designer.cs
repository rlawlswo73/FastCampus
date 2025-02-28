
namespace Csharp_Component
{
    partial class Form1
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            this.variable1 = new System.Windows.Forms.TextBox();
            this.variable2 = new System.Windows.Forms.TextBox();
            this.add = new System.Windows.Forms.Button();
            this.subtrack = new System.Windows.Forms.Button();
            this.multiply = new System.Windows.Forms.Button();
            this.divide = new System.Windows.Forms.Button();
            this.resultLabel = new System.Windows.Forms.Label();
            this.resultListView = new System.Windows.Forms.ListView();
            this.SuspendLayout();
            // 
            // variable1
            // 
            this.variable1.Location = new System.Drawing.Point(39, 35);
            this.variable1.Name = "variable1";
            this.variable1.Size = new System.Drawing.Size(262, 21);
            this.variable1.TabIndex = 0;
            // 
            // variable2
            // 
            this.variable2.Location = new System.Drawing.Point(39, 87);
            this.variable2.Name = "variable2";
            this.variable2.Size = new System.Drawing.Size(262, 21);
            this.variable2.TabIndex = 1;
            // 
            // add
            // 
            this.add.Font = new System.Drawing.Font("굴림", 14F);
            this.add.Location = new System.Drawing.Point(39, 137);
            this.add.Name = "add";
            this.add.Size = new System.Drawing.Size(61, 51);
            this.add.TabIndex = 2;
            this.add.Text = "+";
            this.add.UseVisualStyleBackColor = true;
            this.add.Click += new System.EventHandler(this.add_Click);
            // 
            // subtrack
            // 
            this.subtrack.Font = new System.Drawing.Font("굴림", 14F);
            this.subtrack.Location = new System.Drawing.Point(106, 137);
            this.subtrack.Name = "subtrack";
            this.subtrack.Size = new System.Drawing.Size(61, 51);
            this.subtrack.TabIndex = 2;
            this.subtrack.Text = "-";
            this.subtrack.UseVisualStyleBackColor = true;
            this.subtrack.Click += new System.EventHandler(this.subtrack_Click);
            // 
            // multiply
            // 
            this.multiply.Font = new System.Drawing.Font("굴림", 14F);
            this.multiply.Location = new System.Drawing.Point(173, 137);
            this.multiply.Name = "multiply";
            this.multiply.Size = new System.Drawing.Size(61, 51);
            this.multiply.TabIndex = 2;
            this.multiply.Text = "*";
            this.multiply.UseVisualStyleBackColor = true;
            this.multiply.Click += new System.EventHandler(this.multiply_Click);
            // 
            // divide
            // 
            this.divide.Font = new System.Drawing.Font("굴림", 14F);
            this.divide.Location = new System.Drawing.Point(240, 137);
            this.divide.Name = "divide";
            this.divide.Size = new System.Drawing.Size(61, 51);
            this.divide.TabIndex = 2;
            this.divide.Text = "/";
            this.divide.UseVisualStyleBackColor = true;
            this.divide.Click += new System.EventHandler(this.divide_Click);
            // 
            // resultLabel
            // 
            this.resultLabel.Location = new System.Drawing.Point(39, 214);
            this.resultLabel.Name = "resultLabel";
            this.resultLabel.Size = new System.Drawing.Size(262, 39);
            this.resultLabel.TabIndex = 3;
            this.resultLabel.Text = "결과";
            this.resultLabel.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            // 
            // resultListView
            // 
            this.resultListView.HideSelection = false;
            this.resultListView.Location = new System.Drawing.Point(41, 256);
            this.resultListView.Name = "resultListView";
            this.resultListView.Size = new System.Drawing.Size(260, 97);
            this.resultListView.TabIndex = 4;
            this.resultListView.UseCompatibleStateImageBehavior = false;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(346, 380);
            this.Controls.Add(this.resultListView);
            this.Controls.Add(this.resultLabel);
            this.Controls.Add(this.divide);
            this.Controls.Add(this.multiply);
            this.Controls.Add(this.subtrack);
            this.Controls.Add(this.add);
            this.Controls.Add(this.variable2);
            this.Controls.Add(this.variable1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox variable1;
        private System.Windows.Forms.TextBox variable2;
        private System.Windows.Forms.Button add;
        private System.Windows.Forms.Button subtrack;
        private System.Windows.Forms.Button multiply;
        private System.Windows.Forms.Button divide;
        private System.Windows.Forms.Label resultLabel;
        private System.Windows.Forms.ListView resultListView;
    }
}

