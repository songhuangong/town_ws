# generated from rosidl_generator_py/resource/_idl.py.em
# with input from village_interface:srv/Buybooks.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Buybooks_Request(type):
    """Metaclass of message 'Buybooks_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('village_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'village_interface.srv.Buybooks_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__buybooks__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__buybooks__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__buybooks__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__buybooks__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__buybooks__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Buybooks_Request(metaclass=Metaclass_Buybooks_Request):
    """Message class 'Buybooks_Request'."""

    __slots__ = [
        '_money',
    ]

    _fields_and_field_types = {
        'money': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.money = kwargs.get('money', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.money != other.money:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def money(self):
        """Message field 'money'."""
        return self._money

    @money.setter
    def money(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'money' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'money' field must be an unsigned integer in [0, 4294967295]"
        self._money = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Buybooks_Response(type):
    """Metaclass of message 'Buybooks_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('village_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'village_interface.srv.Buybooks_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__buybooks__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__buybooks__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__buybooks__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__buybooks__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__buybooks__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Buybooks_Response(metaclass=Metaclass_Buybooks_Response):
    """Message class 'Buybooks_Response'."""

    __slots__ = [
        '_books',
    ]

    _fields_and_field_types = {
        'books': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.books = kwargs.get('books', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.books != other.books:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def books(self):
        """Message field 'books'."""
        return self._books

    @books.setter
    def books(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'books' field must be a set or sequence and each value of type 'str'"
        self._books = value


class Metaclass_Buybooks(type):
    """Metaclass of service 'Buybooks'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('village_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'village_interface.srv.Buybooks')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__buybooks

            from village_interface.srv import _buybooks
            if _buybooks.Metaclass_Buybooks_Request._TYPE_SUPPORT is None:
                _buybooks.Metaclass_Buybooks_Request.__import_type_support__()
            if _buybooks.Metaclass_Buybooks_Response._TYPE_SUPPORT is None:
                _buybooks.Metaclass_Buybooks_Response.__import_type_support__()


class Buybooks(metaclass=Metaclass_Buybooks):
    from village_interface.srv._buybooks import Buybooks_Request as Request
    from village_interface.srv._buybooks import Buybooks_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
