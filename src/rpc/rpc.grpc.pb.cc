// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: rpc.proto

#include "rpc.pb.h"
#include "rpc.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace ambr {
namespace rpc {

static const char* RpcInterface_method_names[] = {
  "/ambr.rpc.RpcInterface/AddSendUnitByJson",
  "/ambr.rpc.RpcInterface/AddReceiveUnitByJson",
  "/ambr.rpc.RpcInterface/GetWaitForReceiveUnit",
  "/ambr.rpc.RpcInterface/GetBalance",
  "/ambr.rpc.RpcInterface/GetHistory",
  "/ambr.rpc.RpcInterface/SendMessage",
  "/ambr.rpc.RpcInterface/GetMessageStream",
  "/ambr.rpc.RpcInterface/GetLastUnitHash",
  "/ambr.rpc.RpcInterface/PubSendTransf",
  "/ambr.rpc.RpcInterface/PubReceiveTransf",
  "/ambr.rpc.RpcInterface/PubSendMessage",
};

std::unique_ptr< RpcInterface::Stub> RpcInterface::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< RpcInterface::Stub> stub(new RpcInterface::Stub(channel));
  return stub;
}

RpcInterface::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_AddSendUnitByJson_(RpcInterface_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_AddReceiveUnitByJson_(RpcInterface_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetWaitForReceiveUnit_(RpcInterface_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetBalance_(RpcInterface_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetHistory_(RpcInterface_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SendMessage_(RpcInterface_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetMessageStream_(RpcInterface_method_names[6], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_GetLastUnitHash_(RpcInterface_method_names[7], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_PubSendTransf_(RpcInterface_method_names[8], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_PubReceiveTransf_(RpcInterface_method_names[9], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_PubSendMessage_(RpcInterface_method_names[10], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status RpcInterface::Stub::AddSendUnitByJson(::grpc::ClientContext* context, const ::ambr::rpc::AddUnitRequest& request, ::ambr::rpc::AddUnitReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_AddSendUnitByJson_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::ambr::rpc::AddUnitReply>* RpcInterface::Stub::AsyncAddSendUnitByJsonRaw(::grpc::ClientContext* context, const ::ambr::rpc::AddUnitRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ambr::rpc::AddUnitReply>::Create(channel_.get(), cq, rpcmethod_AddSendUnitByJson_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ambr::rpc::AddUnitReply>* RpcInterface::Stub::PrepareAsyncAddSendUnitByJsonRaw(::grpc::ClientContext* context, const ::ambr::rpc::AddUnitRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ambr::rpc::AddUnitReply>::Create(channel_.get(), cq, rpcmethod_AddSendUnitByJson_, context, request, false);
}

::grpc::Status RpcInterface::Stub::AddReceiveUnitByJson(::grpc::ClientContext* context, const ::ambr::rpc::AddUnitRequest& request, ::ambr::rpc::AddUnitReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_AddReceiveUnitByJson_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::ambr::rpc::AddUnitReply>* RpcInterface::Stub::AsyncAddReceiveUnitByJsonRaw(::grpc::ClientContext* context, const ::ambr::rpc::AddUnitRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ambr::rpc::AddUnitReply>::Create(channel_.get(), cq, rpcmethod_AddReceiveUnitByJson_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ambr::rpc::AddUnitReply>* RpcInterface::Stub::PrepareAsyncAddReceiveUnitByJsonRaw(::grpc::ClientContext* context, const ::ambr::rpc::AddUnitRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ambr::rpc::AddUnitReply>::Create(channel_.get(), cq, rpcmethod_AddReceiveUnitByJson_, context, request, false);
}

::grpc::Status RpcInterface::Stub::GetWaitForReceiveUnit(::grpc::ClientContext* context, const ::ambr::rpc::GetWaitForReceiveUnitRequest& request, ::ambr::rpc::GetWaitForReceiveUnitReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetWaitForReceiveUnit_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::ambr::rpc::GetWaitForReceiveUnitReply>* RpcInterface::Stub::AsyncGetWaitForReceiveUnitRaw(::grpc::ClientContext* context, const ::ambr::rpc::GetWaitForReceiveUnitRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ambr::rpc::GetWaitForReceiveUnitReply>::Create(channel_.get(), cq, rpcmethod_GetWaitForReceiveUnit_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ambr::rpc::GetWaitForReceiveUnitReply>* RpcInterface::Stub::PrepareAsyncGetWaitForReceiveUnitRaw(::grpc::ClientContext* context, const ::ambr::rpc::GetWaitForReceiveUnitRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ambr::rpc::GetWaitForReceiveUnitReply>::Create(channel_.get(), cq, rpcmethod_GetWaitForReceiveUnit_, context, request, false);
}

::grpc::Status RpcInterface::Stub::GetBalance(::grpc::ClientContext* context, const ::ambr::rpc::GetBalanceRequest& request, ::ambr::rpc::GetBalanceReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetBalance_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::ambr::rpc::GetBalanceReply>* RpcInterface::Stub::AsyncGetBalanceRaw(::grpc::ClientContext* context, const ::ambr::rpc::GetBalanceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ambr::rpc::GetBalanceReply>::Create(channel_.get(), cq, rpcmethod_GetBalance_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ambr::rpc::GetBalanceReply>* RpcInterface::Stub::PrepareAsyncGetBalanceRaw(::grpc::ClientContext* context, const ::ambr::rpc::GetBalanceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ambr::rpc::GetBalanceReply>::Create(channel_.get(), cq, rpcmethod_GetBalance_, context, request, false);
}

::grpc::Status RpcInterface::Stub::GetHistory(::grpc::ClientContext* context, const ::ambr::rpc::GetHistoryRequest& request, ::ambr::rpc::GetHistoryReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetHistory_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::ambr::rpc::GetHistoryReply>* RpcInterface::Stub::AsyncGetHistoryRaw(::grpc::ClientContext* context, const ::ambr::rpc::GetHistoryRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ambr::rpc::GetHistoryReply>::Create(channel_.get(), cq, rpcmethod_GetHistory_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ambr::rpc::GetHistoryReply>* RpcInterface::Stub::PrepareAsyncGetHistoryRaw(::grpc::ClientContext* context, const ::ambr::rpc::GetHistoryRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ambr::rpc::GetHistoryReply>::Create(channel_.get(), cq, rpcmethod_GetHistory_, context, request, false);
}

::grpc::Status RpcInterface::Stub::SendMessage(::grpc::ClientContext* context, const ::ambr::rpc::SendMessageRequest& request, ::ambr::rpc::SendMessageReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SendMessage_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::ambr::rpc::SendMessageReply>* RpcInterface::Stub::AsyncSendMessageRaw(::grpc::ClientContext* context, const ::ambr::rpc::SendMessageRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ambr::rpc::SendMessageReply>::Create(channel_.get(), cq, rpcmethod_SendMessage_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ambr::rpc::SendMessageReply>* RpcInterface::Stub::PrepareAsyncSendMessageRaw(::grpc::ClientContext* context, const ::ambr::rpc::SendMessageRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ambr::rpc::SendMessageReply>::Create(channel_.get(), cq, rpcmethod_SendMessage_, context, request, false);
}

::grpc::ClientReader< ::ambr::rpc::MessageStreamReply>* RpcInterface::Stub::GetMessageStreamRaw(::grpc::ClientContext* context, const ::ambr::rpc::MessageStreamRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::ambr::rpc::MessageStreamReply>::Create(channel_.get(), rpcmethod_GetMessageStream_, context, request);
}

::grpc::ClientAsyncReader< ::ambr::rpc::MessageStreamReply>* RpcInterface::Stub::AsyncGetMessageStreamRaw(::grpc::ClientContext* context, const ::ambr::rpc::MessageStreamRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::ambr::rpc::MessageStreamReply>::Create(channel_.get(), cq, rpcmethod_GetMessageStream_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::ambr::rpc::MessageStreamReply>* RpcInterface::Stub::PrepareAsyncGetMessageStreamRaw(::grpc::ClientContext* context, const ::ambr::rpc::MessageStreamRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::ambr::rpc::MessageStreamReply>::Create(channel_.get(), cq, rpcmethod_GetMessageStream_, context, request, false, nullptr);
}

::grpc::Status RpcInterface::Stub::GetLastUnitHash(::grpc::ClientContext* context, const ::ambr::rpc::GetLastUnitHashRequest& request, ::ambr::rpc::GetLastUnitHashReplay* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetLastUnitHash_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::ambr::rpc::GetLastUnitHashReplay>* RpcInterface::Stub::AsyncGetLastUnitHashRaw(::grpc::ClientContext* context, const ::ambr::rpc::GetLastUnitHashRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ambr::rpc::GetLastUnitHashReplay>::Create(channel_.get(), cq, rpcmethod_GetLastUnitHash_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ambr::rpc::GetLastUnitHashReplay>* RpcInterface::Stub::PrepareAsyncGetLastUnitHashRaw(::grpc::ClientContext* context, const ::ambr::rpc::GetLastUnitHashRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ambr::rpc::GetLastUnitHashReplay>::Create(channel_.get(), cq, rpcmethod_GetLastUnitHash_, context, request, false);
}

::grpc::Status RpcInterface::Stub::PubSendTransf(::grpc::ClientContext* context, const ::ambr::rpc::PubSendTransfRequest& request, ::ambr::rpc::PubSendTransfReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_PubSendTransf_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::ambr::rpc::PubSendTransfReply>* RpcInterface::Stub::AsyncPubSendTransfRaw(::grpc::ClientContext* context, const ::ambr::rpc::PubSendTransfRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ambr::rpc::PubSendTransfReply>::Create(channel_.get(), cq, rpcmethod_PubSendTransf_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ambr::rpc::PubSendTransfReply>* RpcInterface::Stub::PrepareAsyncPubSendTransfRaw(::grpc::ClientContext* context, const ::ambr::rpc::PubSendTransfRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ambr::rpc::PubSendTransfReply>::Create(channel_.get(), cq, rpcmethod_PubSendTransf_, context, request, false);
}

::grpc::Status RpcInterface::Stub::PubReceiveTransf(::grpc::ClientContext* context, const ::ambr::rpc::PubReceiveTransfRequest& request, ::ambr::rpc::PubReceiveTransfReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_PubReceiveTransf_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::ambr::rpc::PubReceiveTransfReply>* RpcInterface::Stub::AsyncPubReceiveTransfRaw(::grpc::ClientContext* context, const ::ambr::rpc::PubReceiveTransfRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ambr::rpc::PubReceiveTransfReply>::Create(channel_.get(), cq, rpcmethod_PubReceiveTransf_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ambr::rpc::PubReceiveTransfReply>* RpcInterface::Stub::PrepareAsyncPubReceiveTransfRaw(::grpc::ClientContext* context, const ::ambr::rpc::PubReceiveTransfRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ambr::rpc::PubReceiveTransfReply>::Create(channel_.get(), cq, rpcmethod_PubReceiveTransf_, context, request, false);
}

::grpc::Status RpcInterface::Stub::PubSendMessage(::grpc::ClientContext* context, const ::ambr::rpc::PubSendMessageRequest& request, ::ambr::rpc::PubSendMessageReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_PubSendMessage_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::ambr::rpc::PubSendMessageReply>* RpcInterface::Stub::AsyncPubSendMessageRaw(::grpc::ClientContext* context, const ::ambr::rpc::PubSendMessageRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ambr::rpc::PubSendMessageReply>::Create(channel_.get(), cq, rpcmethod_PubSendMessage_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ambr::rpc::PubSendMessageReply>* RpcInterface::Stub::PrepareAsyncPubSendMessageRaw(::grpc::ClientContext* context, const ::ambr::rpc::PubSendMessageRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::ambr::rpc::PubSendMessageReply>::Create(channel_.get(), cq, rpcmethod_PubSendMessage_, context, request, false);
}

RpcInterface::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RpcInterface_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RpcInterface::Service, ::ambr::rpc::AddUnitRequest, ::ambr::rpc::AddUnitReply>(
          std::mem_fn(&RpcInterface::Service::AddSendUnitByJson), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RpcInterface_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RpcInterface::Service, ::ambr::rpc::AddUnitRequest, ::ambr::rpc::AddUnitReply>(
          std::mem_fn(&RpcInterface::Service::AddReceiveUnitByJson), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RpcInterface_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RpcInterface::Service, ::ambr::rpc::GetWaitForReceiveUnitRequest, ::ambr::rpc::GetWaitForReceiveUnitReply>(
          std::mem_fn(&RpcInterface::Service::GetWaitForReceiveUnit), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RpcInterface_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RpcInterface::Service, ::ambr::rpc::GetBalanceRequest, ::ambr::rpc::GetBalanceReply>(
          std::mem_fn(&RpcInterface::Service::GetBalance), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RpcInterface_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RpcInterface::Service, ::ambr::rpc::GetHistoryRequest, ::ambr::rpc::GetHistoryReply>(
          std::mem_fn(&RpcInterface::Service::GetHistory), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RpcInterface_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RpcInterface::Service, ::ambr::rpc::SendMessageRequest, ::ambr::rpc::SendMessageReply>(
          std::mem_fn(&RpcInterface::Service::SendMessage), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RpcInterface_method_names[6],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< RpcInterface::Service, ::ambr::rpc::MessageStreamRequest, ::ambr::rpc::MessageStreamReply>(
          std::mem_fn(&RpcInterface::Service::GetMessageStream), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RpcInterface_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RpcInterface::Service, ::ambr::rpc::GetLastUnitHashRequest, ::ambr::rpc::GetLastUnitHashReplay>(
          std::mem_fn(&RpcInterface::Service::GetLastUnitHash), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RpcInterface_method_names[8],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RpcInterface::Service, ::ambr::rpc::PubSendTransfRequest, ::ambr::rpc::PubSendTransfReply>(
          std::mem_fn(&RpcInterface::Service::PubSendTransf), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RpcInterface_method_names[9],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RpcInterface::Service, ::ambr::rpc::PubReceiveTransfRequest, ::ambr::rpc::PubReceiveTransfReply>(
          std::mem_fn(&RpcInterface::Service::PubReceiveTransf), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RpcInterface_method_names[10],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RpcInterface::Service, ::ambr::rpc::PubSendMessageRequest, ::ambr::rpc::PubSendMessageReply>(
          std::mem_fn(&RpcInterface::Service::PubSendMessage), this)));
}

RpcInterface::Service::~Service() {
}

::grpc::Status RpcInterface::Service::AddSendUnitByJson(::grpc::ServerContext* context, const ::ambr::rpc::AddUnitRequest* request, ::ambr::rpc::AddUnitReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RpcInterface::Service::AddReceiveUnitByJson(::grpc::ServerContext* context, const ::ambr::rpc::AddUnitRequest* request, ::ambr::rpc::AddUnitReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RpcInterface::Service::GetWaitForReceiveUnit(::grpc::ServerContext* context, const ::ambr::rpc::GetWaitForReceiveUnitRequest* request, ::ambr::rpc::GetWaitForReceiveUnitReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RpcInterface::Service::GetBalance(::grpc::ServerContext* context, const ::ambr::rpc::GetBalanceRequest* request, ::ambr::rpc::GetBalanceReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RpcInterface::Service::GetHistory(::grpc::ServerContext* context, const ::ambr::rpc::GetHistoryRequest* request, ::ambr::rpc::GetHistoryReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RpcInterface::Service::SendMessage(::grpc::ServerContext* context, const ::ambr::rpc::SendMessageRequest* request, ::ambr::rpc::SendMessageReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RpcInterface::Service::GetMessageStream(::grpc::ServerContext* context, const ::ambr::rpc::MessageStreamRequest* request, ::grpc::ServerWriter< ::ambr::rpc::MessageStreamReply>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RpcInterface::Service::GetLastUnitHash(::grpc::ServerContext* context, const ::ambr::rpc::GetLastUnitHashRequest* request, ::ambr::rpc::GetLastUnitHashReplay* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RpcInterface::Service::PubSendTransf(::grpc::ServerContext* context, const ::ambr::rpc::PubSendTransfRequest* request, ::ambr::rpc::PubSendTransfReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RpcInterface::Service::PubReceiveTransf(::grpc::ServerContext* context, const ::ambr::rpc::PubReceiveTransfRequest* request, ::ambr::rpc::PubReceiveTransfReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RpcInterface::Service::PubSendMessage(::grpc::ServerContext* context, const ::ambr::rpc::PubSendMessageRequest* request, ::ambr::rpc::PubSendMessageReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace ambr
}  // namespace rpc

