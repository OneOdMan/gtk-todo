MAIN_WINDOW=../C/application/ui/main-window/main-window.c

gcc $(pkg-config --cflags gtk4) \
       	-o main main.c $MAIN_WINDOW \
	$(pkg-config --libs gtk4) \
