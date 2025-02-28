
namespace Client
{
    partial class SinglePlayForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.boardPictureBox = new System.Windows.Forms.PictureBox();
            this.playButton = new System.Windows.Forms.Button();
            this.status = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.boardPictureBox)).BeginInit();
            this.SuspendLayout();
            // 
            // boardPictureBox
            // 
            this.boardPictureBox.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(255)))), ((int)(((byte)(216)))));
            this.boardPictureBox.Location = new System.Drawing.Point(20, 20);
            this.boardPictureBox.Name = "boardPictureBox";
            this.boardPictureBox.Size = new System.Drawing.Size(500, 500);
            this.boardPictureBox.TabIndex = 0;
            this.boardPictureBox.TabStop = false;
            this.boardPictureBox.Paint += new System.Windows.Forms.PaintEventHandler(this.boardPictureBox_Paint);
            this.boardPictureBox.MouseDown += new System.Windows.Forms.MouseEventHandler(this.boardPictureBox_MouseDown);
            // 
            // playButton
            // 
            this.playButton.Location = new System.Drawing.Point(633, 61);
            this.playButton.Name = "playButton";
            this.playButton.Size = new System.Drawing.Size(100, 40);
            this.playButton.TabIndex = 1;
            this.playButton.Text = "게임 시작";
            this.playButton.UseVisualStyleBackColor = true;
            this.playButton.Click += new System.EventHandler(this.playButton_Click);
            // 
            // status
            // 
            this.status.Location = new System.Drawing.Point(550, 118);
            this.status.Name = "status";
            this.status.Size = new System.Drawing.Size(272, 15);
            this.status.TabIndex = 2;
            this.status.Text = "게임을 시작해 주세요.";
            this.status.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // SinglePlayForm
            // 
            this.ClientSize = new System.Drawing.Size(864, 541);
            this.Controls.Add(this.status);
            this.Controls.Add(this.playButton);
            this.Controls.Add(this.boardPictureBox);
            this.Name = "SinglePlayForm";
            ((System.ComponentModel.ISupportInitialize)(this.boardPictureBox)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.PictureBox boardPicture;
        private System.Windows.Forms.PictureBox boardPictureBox;
        private System.Windows.Forms.Button playButton;
        private System.Windows.Forms.Label status;
    }
}