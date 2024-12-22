#include <iostream>
#include <gtk/gtk.h>


static void on_activate (GtkApplication *app) 
{
  // Create file dialog
  GtkFileDialog* fileDialog = gtk_file_dialog_new();

  gtk_file_dialog_select_folder ( fileDialog, NULL, NULL, NULL, NULL);
}

int main (int argc, char* argv[])
{
    // Create a new application
  GtkApplication *app = gtk_application_new ("com.example.GtkApplication",
                                             G_APPLICATION_FLAGS_NONE);
  g_signal_connect (app, "activate", G_CALLBACK (on_activate), NULL);
  return g_application_run (G_APPLICATION (app), argc, argv);
}



