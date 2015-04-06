//============================================================================
// Name        : gtk_picture_test.cpp
// Author      : Lukas David Larsed
// Version     :
// Copyright   : s198569
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <gtk/gtk.h>

int main(int argc, char *argv[]) {

	GtkWidget *window;
	GtkWidget *fixed;
	GtkWidget *menubar;
	GtkWidget *filemenu;
	GtkWidget *file;
	GtkWidget *quit;
	GtkWidget *imgframe;
	GtkWidget *imgframe2;
	GtkWidget *toolframe;
	GtkWidget *vbox;
	GtkWidget *but1;
	GtkWidget *but2;
	GtkWidget *but3;
	GtkWidget *but4;
	GtkWidget *but5;
	GtkWidget *but6;
	GtkWidget *but7;
	GtkWidget *image;
	GtkWidget *image2;

	gtk_init(&argc, &argv);

	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
	gtk_window_set_default_size(GTK_WINDOW(window), 1024, 800);
	gtk_window_set_title(GTK_WINDOW(window), "CCIMP");
	gtk_window_set_resizable(GTK_WINDOW(window), TRUE);

	gtk_container_set_border_width(GTK_CONTAINER(window), 6);

	fixed = gtk_fixed_new();

	/*
	 * Menu
	 */
	menubar = gtk_menu_bar_new();
	filemenu = gtk_menu_new();
	file = gtk_menu_item_new_with_label("File");
	quit = gtk_menu_item_new_with_label("Quit");

	gtk_menu_item_set_submenu(GTK_MENU_ITEM(file), filemenu);
	gtk_menu_shell_append(GTK_MENU_SHELL(filemenu), quit);
	gtk_menu_shell_append(GTK_MENU_SHELL(menubar), file);

	image = gtk_image_new_from_file("stol.jpg");
	gtk_widget_set_size_request(image, 500, 300);
	imgframe = gtk_frame_new("Original image");
	gtk_frame_set_shadow_type(GTK_FRAME(imgframe), GTK_SHADOW_ETCHED_IN);
	gtk_container_add(GTK_CONTAINER(imgframe), image);

	image2 = gtk_image_new_from_file("stol2.jpg");
	gtk_widget_set_size_request(image2, 500, 300);
	imgframe2 = gtk_frame_new("Edited image");
	gtk_frame_set_shadow_type(GTK_FRAME(imgframe2), GTK_SHADOW_ETCHED_IN);
	gtk_container_add(GTK_CONTAINER(imgframe2), image2);

	toolframe = gtk_frame_new("Tools");
	vbox = gtk_vbox_new(TRUE, 1);
	but1 = gtk_button_new_with_label("Resize");
	but2 = gtk_button_new_with_label("Rotate");
	but3 = gtk_button_new_with_label("Contrast");
	but4 = gtk_button_new_with_label("Saturation");
	but5 = gtk_button_new_with_label("Sharpness");
	but6 = gtk_button_new_with_label("Colors");
	but7 = gtk_button_new_with_label("Flames");
	gtk_widget_set_size_request(but1, 200, 50);
	gtk_box_pack_start(GTK_BOX(vbox), but1, TRUE, TRUE, 0);
	gtk_box_pack_start(GTK_BOX(vbox), but2, TRUE, TRUE, 0);
	gtk_box_pack_start(GTK_BOX(vbox), but3, TRUE, TRUE, 0);
	gtk_box_pack_start(GTK_BOX(vbox), but4, TRUE, TRUE, 0);
	gtk_box_pack_start(GTK_BOX(vbox), but5, TRUE, TRUE, 0);
	gtk_box_pack_start(GTK_BOX(vbox), but6, TRUE, TRUE, 0);
	gtk_box_pack_start(GTK_BOX(vbox), but7, TRUE, TRUE, 0);
	gtk_frame_set_shadow_type(GTK_FRAME(toolframe), GTK_SHADOW_ETCHED_IN);
	gtk_container_add(GTK_CONTAINER(toolframe), vbox);

	/*
	 * Setting gfixed positions
	 */
	gtk_fixed_put(GTK_FIXED(fixed), menubar, 10, 10);
	gtk_fixed_put(GTK_FIXED(fixed), imgframe, 10, 50);
	gtk_fixed_put(GTK_FIXED(fixed), imgframe2, 10, 400);
	gtk_fixed_put(GTK_FIXED(fixed), toolframe, 700, 50);

	gtk_container_add(GTK_CONTAINER(window), fixed);

	g_signal_connect_swapped(G_OBJECT(window), "destroy",
			G_CALLBACK(gtk_main_quit), G_OBJECT(window));

	g_signal_connect(G_OBJECT(quit), "activate", G_CALLBACK(gtk_main_quit),
			NULL);

	gtk_widget_show_all(window);
	gtk_main();

	return 0;
}
