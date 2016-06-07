#ifndef ARTICATAPP_H
#define ARTICATAPP_H

#include "MooseApp.h"

class ArticatApp;

template<>
InputParameters validParams<ArticatApp>();

class ArticatApp : public MooseApp
{
public:
  ArticatApp(InputParameters parameters);
  virtual ~ArticatApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* ARTICATAPP_H */
