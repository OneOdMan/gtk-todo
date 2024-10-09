#include "main-window.h"
#include <gtk/gtk.h>

int window_status;

// Prints hello world when the button is clicked for testing purposes
static void print_hello(GtkWidget *widget) { g_print("Hello World\n"); }

// Activates the window with its content when run_main_window is called
static void activate(GtkApplication *app, gpointer user_data) {
  GtkWidget *window;
  GtkWidget *button;

  window = gtk_application_window_new(app);
  gtk_window_set_title(GTK_WINDOW(window), "Hello");
  gtk_window_set_default_size(GTK_WINDOW(window), 200, 200);

  button = gtk_button_new_with_label("Hello World");
  g_signal_connect(button, "clicked", G_CALLBACK(print_hello), NULL);
  gtk_window_set_child(GTK_WINDOW(window), button);

  gtk_window_present(GTK_WINDOW(window));
}

// Runs the main window when called
void run_main_window(int argc, char **argv) {
  GtkApplication *app;

  app = gtk_application_new("org.gtk.example", G_APPLICATION_DEFAULT_FLAGS);
  g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);
  window_status = g_application_run(G_APPLICATION(app), argc, argv);
  g_object_unref(app);
}

int get_mainwindow_status() { return window_status; }
