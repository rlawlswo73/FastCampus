
namespace Csharp_event_process
{
    partial class ParentForm
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
            this.openChildForm = new System.Windows.Forms.Button();
            this.dataLabel = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // openChildForm
            // 
            this.openChildForm.Location = new System.Drawing.Point(168, 39);
            this.openChildForm.Name = "openChildForm";
            this.openChildForm.Size = new System.Drawing.Size(148, 22);
            this.openChildForm.TabIndex = 0;
            this.openChildForm.Text = "자식 폼 열기";
            this.openChildForm.UseVisualStyleBackColor = true;
            this.openChildForm.Click += new System.EventHandler(this.openChildForm_Click);
            this.openChildForm.MouseLeave += new System.EventHandler(this.openChildForm_MouseLeave);
            this.openChildForm.MouseHover += new System.EventHandler(this.openChildForm_MouseHover);
            // 
            // dataLabel
            // 
            this.dataLabel.Location = new System.Drawing.Point(124, 84);
            this.dataLabel.Name = "dataLabel";
            this.dataLabel.Size = new System.Drawing.Size(235, 37);
            this.dataLabel.TabIndex = 1;
            this.dataLabel.Text = "데이터";
            this.dataLabel.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // ParentForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(495, 165);
            this.Controls.Add(this.dataLabel);
            this.Controls.Add(this.openChildForm);
            this.Name = "ParentForm";
            this.Text = "Form1";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button openChildForm;
        private System.Windows.Forms.Label dataLabel;
    }
}

