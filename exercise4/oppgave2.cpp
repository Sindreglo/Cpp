#include <gtkmm.h>

class Window : public Gtk::Window {
public:
  Gtk::VBox vbox;
  Gtk::Button button;
  Gtk::Label label;
  Gtk::Label first_name_label;
  Gtk::Entry first_name_entry;
  Gtk::Label last_name_label;
  Gtk::Entry last_name_entry;

  Window() {
    set_title("Hello World!!");
    set_size_request(300);
    button.set_label("Combine names");
    first_name_label.set_text("First name");
    last_name_label.set_text("Last name");
    button.set_sensitive(false);

    vbox.pack_start(first_name_label);
    vbox.pack_start(first_name_entry);
    vbox.pack_start(last_name_label);
    vbox.pack_start(last_name_entry);
    vbox.pack_start(button);
    vbox.pack_start(label);

    add(vbox);
    show_all();

    first_name_entry.signal_changed().connect([this]() {
      if (first_name_entry.get_text().length() > 0 &&
          last_name_entry.get_text().length() > 0) {
        button.set_sensitive(true);
      } else {
        button.set_sensitive(false);
      }
    });

    last_name_entry.signal_changed().connect([this]() {
      if (first_name_entry.get_text().length() > 0 &&
          last_name_entry.get_text().length() > 0) {
        button.set_sensitive(true);
      } else {
        button.set_sensitive(false);
      }
    });

    button.signal_clicked().connect([this]() {
      label.set_text("Combined: " +
                     first_name_entry.get_text() +
                     " " + last_name_entry.get_text());
    });
  }
};

int main() {
  Gtk::Main gtk_main;
  Window window;
  gtk_main.run(window);
}
