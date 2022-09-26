#include <gtkmm.h>
#include <sstream>

class Window : public Gtk::Window {
public:
  Gtk::VBox vbox;

  Gtk::Label first_name_label = Gtk::Label("First name");
  Gtk::Entry first_name_entry;

  Gtk::Label last_name_label = Gtk::Label("Last name");
  Gtk::Entry last_name_entry;

  Gtk::Button combine_names_button = Gtk::Button("Combine names");
  Gtk::Label combined_names_label;

  Window() {
    set_title("Øving 4, Oppgave 2");
    
    vbox.pack_start(first_name_label);
    vbox.pack_start(first_name_entry);
    
    vbox.pack_start(last_name_label);
    vbox.pack_start(last_name_entry);

    vbox.pack_start(combine_names_button);
    vbox.pack_start(combined_names_label);

    add(vbox);

    update_button();

    show_all();

    first_name_entry.signal_changed().connect([this]() { update_button(); });
    last_name_entry.signal_changed().connect([this]() { update_button(); });

    combine_names_button.signal_clicked().connect([this]() {
      combined_names_label.set_label("Combined names: " + first_name_entry.get_text() + " " + last_name_entry.get_text());
    });
  }

private:
  void update_button() {
    combine_names_button.set_sensitive(
      !first_name_entry.get_text().empty() &&
      !last_name_entry.get_text().empty()
    );
  }
};

int main() {
  Gtk::Main gtk_main;
  Window window;
  gtk_main.run(window);
}
