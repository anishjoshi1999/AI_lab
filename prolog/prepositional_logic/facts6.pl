thief(peter).
thief(john).
thief(william).

likes(mary,gold).
likes(bob,diamond).
likes(john,cars).
likes(charlie,money).

may_steal(john,X):-thief(john),likes(john,X).


# Query 
# Things which might john might steal
# may_steal(john,X)
