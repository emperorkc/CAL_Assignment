    CFLAGS ?= -g -Wall -pedantic
 
    all: Main
 
    Main: main.o student.o studentNode.o teacher.o teacherNode.o course.o courseNode.o
	# Commands start with TAB not spaces
	$(CC) $(LDFLAGS) -o $@ $^
 
    student.o: student.h
		$(CC) $(CFLAGS) -c -o $@ $< 

    studentNode.o: studentNode.h

		$(CC) $(CFLAGS) -c -o $@ $<

    teacher.o: teacher.h
		$(CC) $(CFLAGS) -c -o $@ $<

    teacherNode.o: teacherNode.h
		$(CC) $(CFLAGS) -c -o $@ $<

    course.o: course.h
		$(CC) $(CFLAGS) -c -o $@ $<

    courseNode.o: courseNode.h
		$(CC) $(CFLAGS) -c -o $@ $<

    main.o: main.c
		$(CC) $(CFLAGS) -c -o $@ $<

    clean: FRC
		rm -f main.o student.o studentNode.o teacher.o teacherNode.o course.o courseNode.o
 
    # This pseudo target causes all targets that depend on FRC
    # to be remade even in case a file with the name of the target exists.
    # This works with any make implementation under the assumption that
    # there is no file FRC in the current directory.
    FRC: