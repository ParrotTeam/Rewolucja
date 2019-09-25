namespace CSharp_Edition
{
    partial class menuGlowne
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
            this.przyciskGraj = new System.Windows.Forms.Button();
            this.przyciskWczytaj = new System.Windows.Forms.Button();
            this.przyciskTworcy = new System.Windows.Forms.Button();
            this.przyciskWyjscie = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // przyciskGraj
            // 
            this.przyciskGraj.Location = new System.Drawing.Point(324, 242);
            this.przyciskGraj.Name = "przyciskGraj";
            this.przyciskGraj.Size = new System.Drawing.Size(159, 37);
            this.przyciskGraj.TabIndex = 0;
            this.przyciskGraj.Text = "Graj";
            this.przyciskGraj.UseVisualStyleBackColor = true;
            // 
            // przyciskWczytaj
            // 
            this.przyciskWczytaj.Location = new System.Drawing.Point(324, 285);
            this.przyciskWczytaj.Name = "przyciskWczytaj";
            this.przyciskWczytaj.Size = new System.Drawing.Size(159, 37);
            this.przyciskWczytaj.TabIndex = 1;
            this.przyciskWczytaj.Text = "Wczytaj";
            this.przyciskWczytaj.UseVisualStyleBackColor = true;
            // 
            // przyciskTworcy
            // 
            this.przyciskTworcy.Location = new System.Drawing.Point(324, 328);
            this.przyciskTworcy.Name = "przyciskTworcy";
            this.przyciskTworcy.Size = new System.Drawing.Size(159, 37);
            this.przyciskTworcy.TabIndex = 2;
            this.przyciskTworcy.Text = "Twórcy";
            this.przyciskTworcy.UseVisualStyleBackColor = true;
            // 
            // przyciskWyjscie
            // 
            this.przyciskWyjscie.Location = new System.Drawing.Point(324, 371);
            this.przyciskWyjscie.Name = "przyciskWyjscie";
            this.przyciskWyjscie.Size = new System.Drawing.Size(159, 37);
            this.przyciskWyjscie.TabIndex = 3;
            this.przyciskWyjscie.Text = "Wyjście";
            this.przyciskWyjscie.UseVisualStyleBackColor = true;
            // 
            // menuGlowne
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.przyciskWyjscie);
            this.Controls.Add(this.przyciskTworcy);
            this.Controls.Add(this.przyciskWczytaj);
            this.Controls.Add(this.przyciskGraj);
            this.Cursor = System.Windows.Forms.Cursors.WaitCursor;
            this.Name = "menuGlowne";
            this.Text = "menuGlowne";
            this.Load += new System.EventHandler(this.MenuGlowne_Load);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button przyciskGraj;
        private System.Windows.Forms.Button przyciskWczytaj;
        private System.Windows.Forms.Button przyciskTworcy;
        private System.Windows.Forms.Button przyciskWyjscie;
    }
}