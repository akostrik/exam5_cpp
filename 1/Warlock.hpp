#ifndef WARLOCK_HPP                                                                        ///
# define WARLOCK_HPP

# include <string>                                                                         ///
# include <iostream>

class Warlock {

  private:
  std::string       name;
  std::string       title;

                    Warlock    ();
                    Warlock    (const Warlock& obj);                                       /// const
  Warlock&          operator = (const Warlock& obj);

  public:
                    Warlock    (const std::string &name, const std::string &title);        /// const, &
                    ~Warlock   ();

  const std::string &getName   ()                                                   const; /// const const
  const std::string &getTitle  ()                                                   const;
  void              introduce  ()                                                   const; /// const
  void              setTitle   (const std::string &title);
};

#endif