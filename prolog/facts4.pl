likes(john,X):-person(X).
likes(john,X):-likes(X,wine).
isbird(X):-animal(X),feathers(X).
likes(john,X):-likes(X,wine),likes(X,food).
