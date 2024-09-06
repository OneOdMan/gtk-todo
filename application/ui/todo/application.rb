module ToDo
  class Application < Gtk::Application
    def initialize
      super 'com.oneodman.gtk-todo', Gio::ApplicationFlags::FLAGS_NONE

      signal_connect :activate do |application|
        window = Gtk::ApplicationWindow.new(application)
        window.set_title 'GTK-ToDo'
        window.present
      end
    end
  end
end
