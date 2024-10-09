#include "../C/application/ui/main-window/main-window.h"

int main(int argc, char **argv) {
  run_main_window(argc, argv);

  return get_mainwindow_status();
}
