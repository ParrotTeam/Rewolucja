namespace CSharp_Edition.Resources
{
    partial class mainMenu
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
            this.quickLoad = new System.Windows.Forms.Button();
            this.loadGame = new System.Windows.Forms.Button();
            this.credits = new System.Windows.Forms.Button();
            this.shutdown = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // quickLoad
            // 
            this.quickLoad.Location = new System.Drawing.Point(359, 264);
            this.quickLoad.Name = "quickLoad";
            this.quickLoad.Size = new System.Drawing.Size(99, 39);
            this.quickLoad.TabIndex = 0;
            this.quickLoad.Text = "Graj";
            this.quickLoad.UseVisualStyleBackColor = true;
            // 
            // loadGame
            // 
            this.loadGame.Location = new System.Drawing.Point(359, 309);
            this.loadGame.Name = "loadGame";
            this.loadGame.Size = new System.Drawing.Size(99, 39);
            this.loadGame.TabIndex = 1;
            this.loadGame.Text = "Wczytaj";
            this.loadGame.UseVisualStyleBackColor = true;
            // 
            // credits
            // 
            this.credits.Location = new System.Drawing.Point(359, 354);
            this.credits.Name = "credits";
            this.credits.Size = new System.Drawing.Size(99, 39);
            this.credits.TabIndex = 2;
            this.credits.Text = "Twórcy";
            this.credits.UseVisualStyleBackColor = true;
            // 
            // shutdown
            // 
            this.shutdown.Location = new System.Drawing.Point(359, 399);
            this.shutdown.Name = "shutdown";
            this.shutdown.Size = new System.Drawing.Size(99, 39);
            this.shutdown.TabIndex = 3;
            this.shutdown.Text = "Wyjście";
            this.shutdown.UseVisualStyleBackColor = true;
            // 
            // mainMenu
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.shutdown);
            this.Controls.Add(this.credits);
            this.Controls.Add(this.loadGame);
            this.Controls.Add(this.quickLoad);
            this.Name = "mainMenu";
            this.Text = "Menu główne";
            this.WindowState = System.Windows.Forms.FormWindowState.Maximized;
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button quickLoad;
        private System.Windows.Forms.Button loadGame;
        private System.Windows.Forms.Button credits;
        private System.Windows.Forms.Button shutdown;
    }
}