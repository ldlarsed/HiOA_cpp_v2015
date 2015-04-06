//============================================================================
// Name        : gtk_eclipse_test.cpp
// Author      : Lukas David Larsed
// Version     :
// Copyright   : s198569
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <gtk/gtk.h>

using namespace std;

int main(int argc, char *argv[]) {
	GtkWidget *window;
	GtkWidget *event_box;
	GtkWidget *label;

	gtk_init(&argc, &argv);

	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

	gtk_window_set_title(GTK_WINDOW(window), "Cervecero Codigo");
	gtk_window_set_default_size(GTK_WINDOW(window), 800, 600);
	gtk_signal_connect(GTK_OBJECT(window), "destroy", GTK_SIGNAL_FUNC(gtk_exit),
			NULL);
	gtk_container_set_border_width(GTK_CONTAINER(window), 10);

	event_box = gtk_event_box_new();
	gtk_container_add(GTK_CONTAINER(window), event_box);
	gtk_widget_show(event_box);

	label = gtk_label_new("Click here to close!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
	gtk_container_add(GTK_CONTAINER(event_box), label);
	gtk_widget_show(label);

	gtk_widget_set_usize(label, 110, 20);

	gtk_widget_set_events(event_box, GDK_BUTTON_PRESS_MASK);
	gtk_signal_connect(GTK_OBJECT(event_box), "button_press_event",
			GTK_SIGNAL_FUNC (gtk_exit), NULL);

	gtk_widget_realize(event_box);

	gtk_widget_show(window);
	gtk_main();

	return 0;
}

