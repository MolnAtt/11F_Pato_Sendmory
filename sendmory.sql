drop table X;

create table X
    (
        e number(2) not null,
        constraint pkx primary key (e)
    );

insert into X values (0);
insert into X values (1);
insert into X values (2);
insert into X values (3);
insert into X values (4);
insert into X values (5);
insert into X values (6);
insert into X values (7);
insert into X values (8);
insert into X values (9);

SELECT * FROM X;

select * from 
    X S, 
    X E, 
    X N, 
    X D, 
    X M, 
    X O, 
    X R, 
    X Y 
where 0 = 1000*S.e 
    + 91*E.e
    - 90 * N.e 
    + D.e 
    - 9000 * M.e 
    - 900 * O.e 
    + 10 * R.e 
    - Y.e
    and S.e<>0
    and M.e<>0
;
