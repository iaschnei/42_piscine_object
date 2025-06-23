** Explanations : ** 

'Course' has its own file because it does not derive from any other class and has a lot of methods.

'Room' has its own file because it serves as base class for many derivative classes

'RoomTypes' contains every class derivating from 'Room'

'Person' has its own file because it's a base class

'Staff' derives from 'Person' but has its own file because it serves as a base class for many derivative classes

'StaffTypes' contains every class derivating from 'Staff'

'Student' derives from 'Person' but has its own file because it is the only other derivative class from 'Person' apart from 'Staff'

'Form' has its own file with the enum "FormType" because it serves as base class for many derivative classes

'FormTypes' contains every class derivating from 'Form'

'Event' contains only an enum but is used in no other class so it needs its own file

