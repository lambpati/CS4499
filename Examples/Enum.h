#pragma once

//Old/standard/unscoped enum
namespace Statuses {
  enum Status {
    Pending, // Compiler to 0
    Approved, // Compiler to 1
    Cancelled // Compiler to 2
  };
  // Cannot have another variable in entire program called "Pending" etc
  // Namespace allows other variables called "Pending" outside of namespace
}
// New/Strong/Scoped enum

enum class FileError {
  notfound, // static_cast to 0
  ok // static_cast to 1
};

enum class NetworkError {
  disconnected,
  ok
};
// Two "ok"s is fine
