Exercise 7.20
=============

When are friends useful? Discuss the pros and cons of using friends.

Friends are useful when you have a non-member function that needs access to the implementation-level details of a class. This is the primary reason for using a friend, and the primary "pro".

The cons of using friends are that they allow access to implementation-level details that could change much more often than the public interface of a class.

