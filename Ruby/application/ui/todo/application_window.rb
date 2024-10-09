module Todo
  class ApplicationWindow < Gtk::ApplicationWindow
    # Register the class in the GLib world
    type_register

    class << self
      def init
        # Set the template from the resources binary
        set_template resource: '/com/oneodman/gtk-todo/ui/application_window.ui'
      end
    end

    def initialize(application)
      super application: application

      set_title 'GTK To-Do'
    end
  end
end
