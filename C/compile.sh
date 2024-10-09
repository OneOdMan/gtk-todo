gcc $(pkg-config --cflags gtk4) -o main main.c ../C++/application/ui/main-window/main-window.c $(pkg-config --libs gtk4)
