#ifndef WARLOCK_HPP                                   ///
# define WARLOCK_HPP

# include <string>                                    ///

class Warlock {

private:
  std::string  name;
  std::string  title;

               Warlock    ();
               ~Warlock   ();
               Warlock    (const Warlock& obj);      /// const
  Warlock&     operator = (const Warlock& obj);
}

#endif