namespace CSharp_Edition
{
    partial class Rewolucjoniści
    {
        /// <summary>
        /// Wymagana zmienna projektanta.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Wyczyść wszystkie używane zasoby.
        /// </summary>
        /// <param name="disposing">prawda, jeżeli zarządzane zasoby powinny zostać zlikwidowane; Fałsz w przeciwnym wypadku.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Kod generowany przez Projektanta formularzy systemu Windows

        /// <summary>
        /// Metoda wymagana do obsługi projektanta — nie należy modyfikować
        /// jej zawartości w edytorze kodu.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Rewolucjoniści));
            this.przyciskTytulowy = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // przyciskTytulowy
            // 
            this.przyciskTytulowy.Image = global::CSharp_Edition.Properties.Resources.london_protest03_470x260;
            resources.ApplyResources(this.przyciskTytulowy, "przyciskTytulowy");
            this.przyciskTytulowy.Name = "przyciskTytulowy";
            this.przyciskTytulowy.UseVisualStyleBackColor = true;
            this.przyciskTytulowy.Click += new System.EventHandler(this.PictureBox1_Click);
            // 
            // Rewolucjoniści
            // 
            resources.ApplyResources(this, "$this");
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.Controls.Add(this.przyciskTytulowy);
            this.Name = "Rewolucjoniści";
            this.WindowState = System.Windows.Forms.FormWindowState.Maximized;
            this.Load += new System.EventHandler(this.Rewolucjoniści_Load);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button przyciskTytulowy;
    }
}

