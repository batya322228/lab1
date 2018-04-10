.PHONY: clean run

Laba2.class: Laba2.java in/input.class out/output.class Alg/Search.class
	javac Laba2.java
in/input.class: input.java
	javac -d . input.java
out/output.class: output.java
	javac -d . output.java
Alg/Search.class: Search.java
	javac -d . Search.java
jar:Laba2.class
	jar -cfm Laba2.jar main.manifest Laba2.class in/input.class out/output.class Alg/Search.class
clean:
	rm -rf *.class
	rm -r in out Alg Laba2.jar
run:
	java -jar Laba2.jar
